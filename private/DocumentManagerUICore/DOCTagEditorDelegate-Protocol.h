//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentManagerUICore/NSObject-Protocol.h>

@class DOCTag;
@protocol DOCTagEditorPresenter;

@protocol DOCTagEditorDelegate <NSObject>
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidDeselectTag:(DOCTag *)arg2;
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidSelectTag:(DOCTag *)arg2;
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidCreateTag:(DOCTag *)arg2;
@end

