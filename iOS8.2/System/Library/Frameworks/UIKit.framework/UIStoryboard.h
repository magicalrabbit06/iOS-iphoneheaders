/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBundle, NSString, NSDictionary, NSMutableDictionary;

@interface UIStoryboard : NSObject {

	NSBundle* bundle;
	NSString* storyboardFileName;
	NSDictionary* identifierToNibNameMap;
	NSString* designatedEntryPointIdentifier;
	NSMutableDictionary* identifierToUINibMap;

}

@property (nonatomic,readonly) NSBundle * bundle; 
@property (readonly) NSString * name; 
@property (nonatomic,readonly) NSString * storyboardFileName; 
@property (nonatomic,readonly) NSDictionary * identifierToNibNameMap; 
@property (nonatomic,readonly) NSString * designatedEntryPointIdentifier; 
@property (nonatomic,readonly) NSMutableDictionary * identifierToUINibMap; 
+(id)storyboardWithName:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(id)instantiateInitialViewController;
-(id)instantiateViewControllerWithIdentifier:(id)arg1 ;
-(NSString *)name;
-(char)containsNibNamed:(id)arg1 ;
-(id)nibForStoryboardNibNamed:(id)arg1 ;
-(NSBundle *)bundle;
-(id)identifierForStringsFile;
-(id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 designatedEntryPointIdentifier:(id)arg4 ;
-(NSString *)storyboardFileName;
-(NSDictionary *)identifierToNibNameMap;
-(id)nibForViewControllerWithIdentifier:(id)arg1 ;
-(NSString *)designatedEntryPointIdentifier;
-(NSMutableDictionary *)identifierToUINibMap;
@end
