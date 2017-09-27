//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSWPPadding : NSObject
{
    double _topInset;
    double _leftInset;
    double _bottomInset;
    double _rightInset;
}

+ (id)paddingWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
+ (id)padding;
@property(nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)transform:(struct CGAffineTransform)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
- (id)init;

@end

