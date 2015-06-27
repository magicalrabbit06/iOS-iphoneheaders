/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HKSample.h>

@class HKQuantity, HKQuantityType;

@interface HKQuantitySample : HKSample {

	HKQuantity* _quantity;

}

@property (readonly) HKQuantityType * quantityType; 
@property (readonly) HKQuantity * quantity; 
+(char)_isConcreteObjectClass;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5 ;
+(char)supportsSecureCoding;
+(id)_quantitySampleWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(id)arg4 quantityType:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 quantity:(id)arg8 ;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(id)_validateConfiguration;
-(id)_valueDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQuantityType *)quantityType;
-(HKQuantity *)quantity;
-(void)_setQuantity:(id)arg1 ;
@end
