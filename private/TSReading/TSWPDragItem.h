//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UITargetedDragPreview;

@interface TSWPDragItem : NSObject
{
    UITargetedDragPreview *_targetedDragPreview;
    struct CGRect _canvasRect;
}

@property(readonly, nonatomic) struct CGRect canvasRect; // @synthesize canvasRect=_canvasRect;
@property(readonly, retain, nonatomic) UITargetedDragPreview *targetedDragPreview; // @synthesize targetedDragPreview=_targetedDragPreview;
- (void)dealloc;
- (id)initWithDragPreview:(id)arg1 canvasRect:(struct CGRect)arg2;

@end

