//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import "SUScriptNavigationItem.h"

@class NSString, SUScriptCanvasContext, UIImage, WebScriptObject;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem>
{
    id _action;
    SUScriptCanvasContext *_canvas;
    _Bool _shouldPerformDefaultAction;
    WebScriptObject *_target;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
@property(nonatomic) _Bool shouldPerformDefaultAction; // @synthesize shouldPerformDefaultAction=_shouldPerformDefaultAction;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_systemItemString;
- (id)_nativeButton;
- (id)_boxedNativeButton;
- (id)_action;
@property(retain) WebScriptObject *target;
@property(retain) NSString *title;
@property long long tag;
@property(retain) NSString *subtitle;
@property(retain) NSString *style;
@property(readonly) id showingConfirmation;
- (void)showConfirmationWithTitle:(id)arg1 animated:(_Bool)arg2;
@property _Bool loading;
- (void)setImageWithURLString:(id)arg1 scale:(id)arg2;
- (void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
@property _Bool enabled;
@property(retain) SUScriptCanvasContext *canvas;
@property(retain) id action;
- (void)hideConfirmationAnimated:(_Bool)arg1;
- (id)_className;
- (id)buttonItem;
- (void)setNativeButton:(id)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)performActionWithArguments:(id)arg1;
- (id)nativeButtonOfType:(int)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets imageEdgeInsets;
- (void)dealloc;
- (id)initWithSystemItemString:(id)arg1;
- (id)init;
- (id)_initSUScriptButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

