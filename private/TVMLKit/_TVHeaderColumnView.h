//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVHeaderColumnView : UIView
{
    NSArray *_labelViews;
    double _lineSpacing;
}

@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(copy, nonatomic) NSArray *labelViews; // @synthesize labelViews=_labelViews;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

