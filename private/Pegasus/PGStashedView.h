//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PGChevronView;

@interface PGStashedView : UIView
{
    PGChevronView *_chevronViewLeftColorBurn;
    PGChevronView *_chevronViewLeftPlusD;
    PGChevronView *_chevronViewRightColorBurn;
    PGChevronView *_chevronViewRightPlusD;
    _Bool _stashed;
}

@property(nonatomic, getter=isStashed) _Bool stashed; // @synthesize stashed=_stashed;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

