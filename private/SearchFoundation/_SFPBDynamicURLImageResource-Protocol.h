//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBGraphicalFloat, _SFPBImageOption;

@protocol _SFPBDynamicURLImageResource <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *imageOptions;
@property(readonly, nonatomic) _Bool hasSupportsResizing;
@property(nonatomic) _Bool supportsResizing;
@property(readonly, nonatomic) _Bool hasFormatURL;
@property(copy, nonatomic) NSString *formatURL;
@property(readonly, nonatomic) _Bool hasPixelHeight;
@property(retain, nonatomic) _SFPBGraphicalFloat *pixelHeight;
@property(readonly, nonatomic) _Bool hasPixelWidth;
@property(retain, nonatomic) _SFPBGraphicalFloat *pixelWidth;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBImageOption *)imageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageOptionsCount;
- (void)addImageOptions:(_SFPBImageOption *)arg1;
- (void)clearImageOptions;
@end

