/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionCamera/CompanionCamera-Structs.h>
#import <CompanionCamera/CCCameraConnectionProtocol.h>
#import <CompanionCamera/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <CompanionCamera/FigCameraViewfinderDelegate.h>
#import <CompanionCamera/FigCameraViewfinderSessionDelegate.h>

@protocol CCCameraConnectionDelegate;
@class CCCameraConnectionInternal, NSXPCConnection, NSString, FigCameraViewfinder, FigCameraViewfinderSession;

@interface CCCameraConnection : NSObject <CCCameraConnectionProtocol, AVCaptureVideoDataOutputSampleBufferDelegate, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	CCCameraConnectionInternal* _internal;
	NSXPCConnection* _xpc;
	id _orientationChangeObserver;
	NSString* _previewEndpoint;
	FigCameraViewfinder* _remoteViewfinder;
	FigCameraViewfinderSession* _remoteViewfinderSession;
	char _remoteViewfinderSessionActive;
	id<CCCameraConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CCCameraConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<CCCameraConnectionDelegate>)arg1 ;
-(id)init;
-(id<CCCameraConnectionDelegate>)delegate;
-(void)close;
-(int)_currentOrientation;
-(void)photoTaken:(id)arg1 ;
-(void)countdownCanceled;
-(void)modeSelected:(unsigned)arg1 ;
-(void)switchedOrientation:(int)arg1 ;
-(void)switchedMirroringMode:(char)arg1 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(long)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_CC1)arg4 ;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1 ;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(long)arg2 ;
-(void)open;
-(void)takePhotoWithCountdown:(unsigned)arg1 ;
-(oneway void)xpc_setCameraMode:(int)arg1 interruptCapture:(char)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)xpc_beginVideo;
-(oneway void)xpc_endVideo;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1 ;
-(oneway void)xpc_setFocusPoint:(id)arg1 ;
-(oneway void)xpc_fetchCurrentOrientationAndMirroring:(/*^block*/id)arg1 ;
-(oneway void)xpc_cancelCountdown;
-(void)closePreview;
-(void)openPreview;
-(char)isPreviewConnected;
-(char)isOpen;
@end
