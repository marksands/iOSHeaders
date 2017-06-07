//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SXMosaicGalleryColumnLayout : NSObject
{
    double _width;
    double _gutter;
}

@property(readonly, nonatomic) double gutter; // @synthesize gutter=_gutter;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (double)widthOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2;
- (double)positionOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2;
- (double)widthForColumnRange:(struct _NSRange)arg1 numberOfColumns:(unsigned long long)arg2;
- (double)positionForColumnRange:(struct _NSRange)arg1 numberOfColumns:(unsigned long long)arg2;
- (id)initWithWidth:(double)arg1 gutter:(double)arg2;

@end

