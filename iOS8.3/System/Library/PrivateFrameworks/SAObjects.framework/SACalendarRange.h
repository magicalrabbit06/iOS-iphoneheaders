/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SACalendarRange : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * end; 
@property (nonatomic,retain) SACalendar * start; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendarRange;
+(id)calendarRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SACalendar *)start;
-(SACalendar *)end;
-(void)setStart:(SACalendar *)arg1 ;
-(void)setEnd:(SACalendar *)arg1 ;
-(id)encodedClassName;
@end
