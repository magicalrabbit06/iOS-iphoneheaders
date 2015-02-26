/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@interface TRNowPlayingControlPacketEvent : TRPacketEvent {

	long long _controlCommand;

}

@property (nonatomic,readonly) long long controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(long long)controlCommand;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithControlCommand:(long long)arg1 ;
@end
