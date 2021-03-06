/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface RCAudioSessionRoutingAssertion : NSObject {

	NSString* _debugLabel;
	BOOL _requiresActiveAudioSession;
	long long _priority;

}

@property (nonatomic,readonly) BOOL requiresActiveAudioSession;              //@synthesize requiresActiveAudioSession=_requiresActiveAudioSession - In the implementation block
@property (nonatomic,readonly) long long priority;                           //@synthesize priority=_priority - In the implementation block
+(id)newCaptureAssertionNamed:(id)arg1 ;
+(id)newPreviewAssertionNamed:(id)arg1 ;
+(id)newForegroundAppAssertionRequiringActiveAudioSession:(BOOL)arg1 ;
+(id)newForegroundAppAssertion;
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)priority;
-(BOOL)requiresActiveAudioSession;
-(id)initWithDebugLabel:(id)arg1 requiresActiveAudioSession:(BOOL)arg2 priority:(long long)arg3 ;
@end

