//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface _UIButtonBarTargetAction : NSObject
{
    UIBarButtonItem *_barButtonItem;
    CDUnknownBlockType _actionFilter;
}

@property(copy, nonatomic) CDUnknownBlockType actionFilter; // @synthesize actionFilter=_actionFilter;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
- (void).cxx_destruct;
- (void)_invoke:(id)arg1 forEvent:(id)arg2;
@property(readonly, nonatomic) SEL proxyAction;
- (id)initWithBarButtonItem:(id)arg1;
- (id)init;

@end

