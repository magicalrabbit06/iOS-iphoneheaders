/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:00 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <Foundation/NSPredicate.h>
#import <EventKit/EKDefaultPropertiesLoading.h>
#import <EventKit/NSSecureCoding.h>

@class NSString;

@interface EKNotifiableEventsPredicate : NSPredicate <EKDefaultPropertiesLoading, NSSecureCoding>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)predicate;
-(id)defaultPropertiesToLoad;
-(char)shouldLoadDefaultProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)evaluateWithObject:(id)arg1 ;
@end
