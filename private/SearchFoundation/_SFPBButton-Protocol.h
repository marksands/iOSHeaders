//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, _SFPBImage;

@protocol _SFPBButton <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasIsSelected;
@property(nonatomic) _Bool isSelected;
@property(readonly, nonatomic) _Bool hasSelectedImage;
@property(retain, nonatomic) _SFPBImage *selectedImage;
@property(readonly, nonatomic) _Bool hasImage;
@property(retain, nonatomic) _SFPBImage *image;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

