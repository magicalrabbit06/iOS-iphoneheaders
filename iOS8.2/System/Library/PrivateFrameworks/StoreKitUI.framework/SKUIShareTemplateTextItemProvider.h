/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@class SKUIClientContext, SKUIShareTemplateViewElement;

@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider {

	SKUIClientContext* _clientContext;
	SKUIShareTemplateViewElement* _templateElement;

}
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2 ;
@end
