/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WAKView, WebEvent, WebPluginController, NSString, NSTimer, NSArray, WebDataSource;

@interface WebHTMLViewPrivate : NSObject {

	BOOL closed;
	BOOL ignoringMouseDraggedEvents;
	BOOL printing;
	BOOL paginateScreenContent;
	WAKView* layerHostingView;
	BOOL drawingIntoLayer;
	WebEvent* mouseDownEvent;
	BOOL handlingMouseDownEvent;
	WebEvent* keyDownEvent;
	BOOL exposeInputContext;
	CGPoint lastScrollPosition;
	BOOL inScrollPositionChanged;
	WebPluginController* pluginController;
	NSString* toolTip;
	id trackingRectOwner;
	void* trackingRectUserData;
	NSTimer* autoscrollTimer;
	WebEvent* autoscrollTriggerEvent;
	NSArray* pageRects;
	BOOL transparentBackground;
	WebHTMLViewInterpretKeyEventsParameters* interpretKeyEventsParameters;
	WebDataSource* dataSource;
	SEL selectorForDoCommandBySelector;

}
+(void)initialize;
-(void)dealloc;
-(void)clear;
-(void)finalize;
@end
