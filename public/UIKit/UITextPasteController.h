//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextPasteCoordinatorDelegate.h"

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface UITextPasteController : NSObject <UITextPasteCoordinatorDelegate>
{
    NSMapTable *_sessions;
    id <UITextPasteConfigurationSupporting_Internal> _supportingView;
}

+ (id)combineAttributedStrings:(id)arg1;
@property(nonatomic) __weak id <UITextPasteConfigurationSupporting_Internal> supportingView; // @synthesize supportingView=_supportingView;
- (void).cxx_destruct;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 progressSupport:(id)arg3 animator:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_combineItemAttributedStrings:(id)arg1 forRange:(id)arg2;
- (void)_transformTextPasteItem:(id)arg1;
- (id)_clampRange:(id)arg1;
- (void)_executePasteForSession:(id)arg1 animator:(id)arg2;
- (void)coordinator:(id)arg1 endPastingItems:(id)arg2;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3;
- (id)initWithSupportingView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

