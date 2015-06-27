/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSDate;

@interface PDBackgroundTask : NSObject {

	NSObject*<OS_xpc_object> _job;

}

@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (assign,nonatomic) char adjustDates; 
@property (assign,nonatomic) char networkRequired; 
@property (assign,nonatomic) char cellularAllowed; 
@property (assign,nonatomic) char allowedDuringVoiceCall; 
@property (assign,nonatomic) char allowedDuringRoaming; 
@property (assign,nonatomic) char optimizeNetworkPower; 
@property (assign,nonatomic) double requiredScreenBlankedTime; 
@property (assign,nonatomic) double requiredPluggedInTime; 
@property (assign,nonatomic) double requiredBatteryLevel; 
@property (nonatomic,retain) id userContext; 
@property (nonatomic,readonly) char taskValid; 
@property (nonatomic,readonly) char taskSatisfied; 
@property (nonatomic,readonly) char taskExpired; 
@property (nonatomic,readonly) char networkSatisfied; 
@property (nonatomic,readonly) char screenBlankedSatisfied; 
@property (nonatomic,readonly) char pluggedInSatisfied; 
@property (nonatomic,readonly) char batteryLevelSatisfied; 
+(char)isLegalStartDate:(id)arg1 ;
+(id)_taskWithJob:(id)arg1 ;
-(char)networkSatisfied;
-(void)setEndDateForMaximumWindow;
-(void)setNetworkRequired:(char)arg1 ;
-(void)setCellularAllowed:(char)arg1 ;
-(void)setAllowedDuringRoaming:(char)arg1 ;
-(void)setOptimizeNetworkPower:(char)arg1 ;
-(void)setRequiredPluggedInTime:(double)arg1 ;
-(char)networkRequired;
-(char)adjustDates;
-(char)cellularAllowed;
-(char)allowedDuringVoiceCall;
-(char)allowedDuringRoaming;
-(char)optimizeNetworkPower;
-(double)requiredScreenBlankedTime;
-(double)requiredPluggedInTime;
-(double)requiredBatteryLevel;
-(void)setAdjustDates:(char)arg1 ;
-(void)setAllowedDuringVoiceCall:(char)arg1 ;
-(void)setRequiredScreenBlankedTime:(double)arg1 ;
-(void)setRequiredBatteryLevel:(double)arg1 ;
-(char)screenBlankedSatisfied;
-(char)pluggedInSatisfied;
-(char)batteryLevelSatisfied;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)_initWithJob:(id)arg1 ;
-(id)userContext;
-(id)_job;
-(void)setUserContext:(id)arg1 ;
-(char)taskValid;
-(char)taskSatisfied;
-(char)taskExpired;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end
