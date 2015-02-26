/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface AnalyticsLaunchpad : NSObject <ConfigurableObjectProtocol> {

	NSObject*<OS_dispatch_queue> launch_queue;
	NSObject*<OS_dispatch_queue> flows_queue;
	NSObject*<OS_dispatch_queue> nets_queue;
	NSObject*<OS_dispatch_queue> service_queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configure:(id)arg1 ;
-(id)init;
-(int)configure:(id)arg1 ;
-(void)_launchSequence:(id)arg1 ;
@end
