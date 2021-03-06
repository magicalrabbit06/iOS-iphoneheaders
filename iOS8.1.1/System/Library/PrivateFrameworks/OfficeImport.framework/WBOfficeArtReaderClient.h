/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OABReaderClient.h>

@interface WBOfficeArtReaderClient : NSObject <OABReaderClient>
+(int)horizontalPosition:(EshContentProperties*)arg1 ;
+(int)relativeHorizontalPosition:(EshContentProperties*)arg1 ;
+(int)verticalPosition:(EshContentProperties*)arg1 ;
+(int)relativeVerticalPosition:(EshContentProperties*)arg1 ;
+(double)wrapDistanceLeft:(EshContentProperties*)arg1 ;
+(double)wrapDistanceTop:(EshContentProperties*)arg1 ;
+(double)wrapDistanceRight:(EshContentProperties*)arg1 ;
+(double)wrapDistanceBottom:(EshContentProperties*)arg1 ;
+(BOOL)allowOverlap:(EshContentProperties*)arg1 ;
+(BOOL)behindText:(EshContentProperties*)arg1 ;
+(void)readFrom:(EshContentProperties*)arg1 to:(id)arg2 ;
+(BOOL)tablesAreAllowed;
+(void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3 ;
+(BOOL)escherIsFullySupported;
@end

