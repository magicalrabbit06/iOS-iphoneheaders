/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUFormatObject.h>
#import <iWorkImport/TSCHCustomFormatPasteSupport.h>

@interface TSUMutableFormatObject : TSUFormatObject <TSCHCustomFormatPasteSupport>

@property (assign,nonatomic) SCD_Struct_TS53* formatStruct; 
-(void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFormatStruct:(SCD_Struct_TS53*)arg1 ;
@end
