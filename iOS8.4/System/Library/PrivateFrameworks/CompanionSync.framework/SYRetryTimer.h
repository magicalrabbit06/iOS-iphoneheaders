/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface SYRetryTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	double _interval;
	double _backoffFactor;
	int _maxRetries;
	int _numRetries;

}
-(void)cancel;
-(id)initWithInterval:(double)arg1 backoffFactor:(double)arg2 maxRetries:(int)arg3 queue:(id)arg4 callout:(/*^block*/id)arg5 ;
-(BOOL)incrementBackoff;
@end

