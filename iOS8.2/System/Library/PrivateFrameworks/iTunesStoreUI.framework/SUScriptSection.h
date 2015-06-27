/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptViewController;

@interface SUScriptSection : SUScriptObject {

	NSString* _badgeValue;
	NSString* _identifier;
	char _transient;
	SUScriptViewController* _viewController;

}

@property (retain) NSString * badgeValue; 
@property (readonly) NSString * identifier; 
@property (readonly) char transient; 
@property (readonly) SUScriptViewController * viewController; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(SUScriptViewController *)viewController;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)attributeKeys;
-(void)setBadgeValue:(id)arg1 animated:(char)arg2 blink:(char)arg3 ;
-(id)initWithNativeSection:(id)arg1 ;
-(char)transient;
@end
