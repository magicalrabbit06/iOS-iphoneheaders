/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInput_FigRecorder, NSString;

@interface AVCaptureInputPortInternal_FigRecorder : NSObject {

	AVCaptureInput_FigRecorder* input;
	NSString* mediaType;
	opaqueCMFormatDescriptionRef formatDescription;
	OpaqueCMClockRef clock;
	BOOL enabled;

}
-(void)dealloc;
-(id)init;
@end

