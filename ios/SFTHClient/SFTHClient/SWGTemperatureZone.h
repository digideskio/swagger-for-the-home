#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SWGTemperatureZone
@end

@interface SWGTemperatureZone : SWGObject

/* the unique identifier for the zone 
 */
@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSString* name;

@property(nonatomic) NSNumber* inputPosition;

@property(nonatomic) NSNumber* outputPosition;

@property(nonatomic) NSString* zone;

@end