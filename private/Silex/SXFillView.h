//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SXFill;

@interface SXFillView : UIView
{
    SXFill *_fill;
    id <SXDragable> _dragable;
    struct CGRect _originalFrame;
}

@property(readonly, nonatomic) id <SXDragable> dragable; // @synthesize dragable=_dragable;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(readonly, nonatomic) SXFill *fill; // @synthesize fill=_fill;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentFrame;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (id)initWithFill:(id)arg1;

@end

