//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol WGWidgetVisibilityDelegate;

@interface WGWidgetVisibilityManager : NSObject
{
    NSMutableDictionary *_widgetTagsByIdentifier;
    NSMutableDictionary *_extensionHashByIdentifier;
    NSMutableDictionary *_mobileGestaltAnswerByWidgetTag;
    NSMutableDictionary *_visibilityDefaultValueByIdentifier;
    NSMutableDictionary *_visibilityPreferenceByIdentifier;
    NSMutableSet *_visibilityOverridenIdentifiers;
    NSMutableSet *_mobileGestaltQuestions;
    struct MGNotificationTokenStruct *_mobileGestaltNotificationToken;
    _Bool _delegateRespondsToWidgetVisibilityDidChange;
    id <WGWidgetVisibilityDelegate> _delegate;
}

@property(retain, nonatomic, getter=_mobileGestaltAnswerByWidgetTag) NSMutableDictionary *mobileGestaltAnswerByWidgetTag; // @synthesize mobileGestaltAnswerByWidgetTag=_mobileGestaltAnswerByWidgetTag;
@property(nonatomic) __weak id <WGWidgetVisibilityDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_widgetVisibilityChanged;
- (void)_widgetVisibilityPreferencesChanged;
- (void)_unregisterForVisiblityPreferenceChanges;
- (void)_registerForVisiblityPreferenceChanges;
- (void)_updateMobileGestaltQuestions;
- (_Bool)_updateWidgetVisibilityPreferences;
- (_Bool)_updateWidgetVisibilityPreference:(id)arg1;
- (void)_updateWidgetTagsAndIconVisibilityForExtension:(id)arg1;
- (void)_updateWidgetTagsAndVisibilityForExtensions:(id)arg1;
- (id)_allWidgetTags;
- (id)_widgetTagsForWidgetExtensionInfoDictionary:(id)arg1;
- (void)updateVisibilityForExtensions:(id)arg1;
- (_Bool)isWidgetWithIdentifierVisible:(id)arg1;
- (void)dealloc;
- (id)init;

@end

