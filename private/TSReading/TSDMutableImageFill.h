//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSDImageFill.h>

@class TSPData, TSUColor;

@interface TSDMutableImageFill : TSDImageFill
{
}

@property(nonatomic) _Bool interpretsUntaggedImageDataAsGeneric; // @dynamic interpretsUntaggedImageDataAsGeneric;
- (void)setScale:(double)arg1;
@property(nonatomic) struct CGSize fillSize; // @dynamic fillSize;
@property(retain, nonatomic) TSPData *imageData; // @dynamic imageData;
@property(nonatomic) int technique; // @dynamic technique;
@property(copy, nonatomic) TSUColor *tintColor; // @dynamic tintColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

