//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIMessageActivity.h"

#import "PUActivity.h"

@class NSString, PUActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUMessageActivity : UIMessageActivity <PUActivity>
{
    PUActivityItemSourceController *_itemSourceController;
}

@property(nonatomic) __weak PUActivityItemSourceController *itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (void).cxx_destruct;
- (_Bool)canPerformWithActivityItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

