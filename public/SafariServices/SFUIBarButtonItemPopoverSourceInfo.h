//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_SFPopoverSourceInfo.h"

@class NSString, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface SFUIBarButtonItemPopoverSourceInfo : NSObject <_SFPopoverSourceInfo>
{
    struct UIEdgeInsets _adjustments;
    UIView *_bar;
    UIBarButtonItem *_item;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *popoverSourceView;
@property(readonly, nonatomic) struct CGRect popoverSourceRect;
- (id)initWithItem:(id)arg1 inBar:(id)arg2 adjustments:(struct UIEdgeInsets)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

