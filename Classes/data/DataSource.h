/* Copyright (C) 2010- Peer internet solutions
 * 
 * This file is part of mixare.
 * 
 * This program is free software: you can redistribute it and/or modify it 
 * under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 3 of the License, or 
 * (at your option) any later version. 
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS 
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details. 
 * 
 * You should have received a copy of the GNU General Public License along with 
 * this program. If not, see <http://www.gnu.org/licenses/> */

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "JsonHandler.h"
#import "Position.h"

@interface DataSource : NSObject {
	CLLocationManager *_locationManager;
    
    NSString *title;
    NSString *jsonUrl;
    BOOL *activated;
    NSMutableArray *positions;
    NSMutableDictionary *urlValueData;
    
    JsonHandler *jHandler;
}

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *jsonUrl;
@property (nonatomic, assign) BOOL *activated;
@property (nonatomic, retain) NSMutableArray *positions;

-(DataSource*) initWithLocationManager:(CLLocationManager*)loc title:(NSString*)tit jsonUrl:(NSString*)url;
-(void) refreshPositions;


//+(NSString *) createRequestURLFromDataSource: (NSString*) source Lat: (float) lat Lon: (float) lon Alt: (float) alt radius: (float) rad Lang: (NSString *) lang;
@end
