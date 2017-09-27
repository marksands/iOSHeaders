//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSObject<BlockableScrollViewDelegate>;

@interface BlockableScrollView : UIScrollView
{
    _Bool _isResizing;
    NSObject<BlockableScrollViewDelegate> *_blockableDelegate;
}

@property(nonatomic) _Bool isResizing; // @synthesize isResizing=_isResizing;
@property(nonatomic) __weak NSObject<BlockableScrollViewDelegate> *blockableDelegate; // @synthesize blockableDelegate=_blockableDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

