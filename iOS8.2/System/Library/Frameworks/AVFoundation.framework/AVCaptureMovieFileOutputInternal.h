/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSMutableArray, NSArray;

@interface AVCaptureMovieFileOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* recordingDelegatesArray;
	SCD_Struct_CM4 movieFragmentInterval;
	NSArray* metadata;
	char sendLastVideoPreviewFrame;
	char recording;
	char paused;

}
-(void)dealloc;
-(id)init;
@end
