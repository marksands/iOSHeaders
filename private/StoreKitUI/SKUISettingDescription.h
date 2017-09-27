//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUISettingsGroupDescription, SKUIViewElement;

@interface SKUISettingDescription : NSObject
{
    SKUIViewElement *_viewElement;
    _Bool _editsValid;
    SKUISettingsGroupDescription *_parent;
}

+ (Class)_viewClassForSettingDescription:(id)arg1;
+ (Class)viewClassForSettingDescription:(id)arg1;
+ (_Bool)allowsEdit;
@property(retain, nonatomic) SKUIViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) __weak SKUISettingsGroupDescription *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)_setEditsValid:(_Bool)arg1;
- (void)_revealSetting;
- (void)_reloadSetting;
- (void)_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isHidden;
- (_Bool)_initiallyHidden;
- (void)_hideSetting;
- (void)_dispatchUpdate:(id)arg1;
- (void)_dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deleteSetting;
- (void)reloadWithViewElement:(id)arg1 parent:(id)arg2;
- (void)reloadData;
- (id)indexPath;
- (void)handleSelectionOnCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool editsValid;
- (void)discardEdits;
- (_Bool)commitEdits:(CDUnknownBlockType)arg1;
- (void)cancelEdits;
- (void)beginEditing;
@property(readonly, nonatomic) _Bool allowsSelection;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;

@end

