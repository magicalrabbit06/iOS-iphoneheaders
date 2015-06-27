/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, SCRCTargetSelectorTimer, VOTKeyInfo;

@interface VOTKeyboardManager : NSObject {

	NSDictionary* _keyboardCommandsTable;
	NSDictionary* _singleLetterCommandsTable;
	NSString* _lastLayout;
	NSDictionary* _layoutToKeyboardMap;
	NSDictionary* _keyboardMap;
	unsigned _currentModifiers;
	char _controlKeyDown;
	NSString* _lastCommand;
	SCRCTargetSelectorTimer* _keyRepeatTimer;
	unsigned _keyboardHelpMask;
	char _isQuickNavOn;
	SCRCTargetSelectorTimer* _quickNavRepostTimer;
	SCRCTargetSelectorTimer* _quickNavKeyTimer;
	unsigned long long _quickNavStateMask;
	unsigned long long _quickNavLastDownState;
	char _quickNavDidSendDown;
	char _capsLockOn;
	char _captureModeEnabled;
	char _explictlyEnabledQuickNav;
	VOTKeyInfo* _keyDownInfo;

}

@property (nonatomic,readonly) char isQuickNavOn;                        //@synthesize isQuickNavOn=_isQuickNavOn - In the implementation block
@property (assign,nonatomic) char captureModeEnabled;                    //@synthesize captureModeEnabled=_captureModeEnabled - In the implementation block
@property (assign,nonatomic) char explictlyEnabledQuickNav;              //@synthesize explictlyEnabledQuickNav=_explictlyEnabledQuickNav - In the implementation block
+(id)keyboardManager;
+(void)initialize;
-(void)handleKeyboardKeyEvent:(id)arg1 eventOrigin:(int)arg2 ;
-(void)updateQuickNavState:(char)arg1 ;
-(void)setCaptureModeEnabled:(char)arg1 ;
-(id)singleLetterCommandForKeyInfo:(id)arg1 ;
-(char)isQuickNavOn;
-(char)explictlyEnabledQuickNav;
-(void)loadKeyboardMap;
-(void)_initializeQuickNav;
-(void)_keyRepeat:(id)arg1 ;
-(void)_handleKeyboardKeyEvent:(id)arg1 ;
-(id)_localizeKeyboardString:(id)arg1 ;
-(void)_postEvent:(id)arg1 ;
-(void)setKeyDownInfo:(id)arg1 ;
-(char)_handleArrowKeyEvent:(id)arg1 ;
-(id)_voiceOverCommandForKeyInfo:(id)arg1 ;
-(void)_sendEventForCommand:(id)arg1 withKeyInfo:(id)arg2 arrowInfo:(id)arg3 ;
-(void)_handleQuickNavPressTimer:(id)arg1 ;
-(void)_handleQuickNavDownArrowRepostPress:(id)arg1 ;
-(void)_handleQuickNavPress:(id)arg1 ;
-(void)_postKeyboardKey:(id)arg1 keyCode:(unsigned short)arg2 eventFlags:(unsigned)arg3 keyFlags:(unsigned short)arg4 keyDown:(char)arg5 source:(unsigned short)arg6 ;
-(void)_updateEventFlags:(id)arg1 ;
-(void)_handleAnnouncementsForKeyInfo:(id)arg1 ;
-(char)_dispatchCommandForKeyInfo:(id)arg1 ;
-(id)keyboardCommandForKeyInfo:(id)arg1 ;
-(id)keyDownInfo;
-(char)captureModeEnabled;
-(void)setExplictlyEnabledQuickNav:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)postEvent:(id)arg1 ;
@end
