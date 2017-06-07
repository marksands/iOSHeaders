//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAContext, NSMutableDictionary, NSString;

@interface TIKeyboardSecureCandidateRenderer : NSObject
{
    NSMutableDictionary *_secureCandidateCache;
    CAContext *_context;
    NSString *_localeIdentifier;
    NSMutableDictionary *_accessibilityLabelCache;
}

+ (id)allRenderers;
@property(readonly, retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSMutableDictionary *secureCandidateCache; // @synthesize secureCandidateCache=_secureCandidateCache;
@property(readonly, retain, nonatomic) CAContext *context; // @synthesize context=_context;
- (id)cachedPayloadForSecureCandidateSlotID:(unsigned int)arg1;
- (id)cachedCandidateForSecureCandidate:(id)arg1;
- (void)clearSecureCandidateCache;
- (unsigned int)slotIDForSendCurrentLocationWithRenderTraits:(id)arg1;
- (struct CGImage *)imageForSendCurrentLocationWithRenderTraits:(id)arg1;
- (id)slotIDsFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2;
- (id)localizedApplicationNameWithBundleIdentifier:(id)arg1;
- (id)accessibilityLabelForSlotID:(unsigned int)arg1;
- (void)cacheAccessibilityLabel:(id)arg1 forSlotID:(unsigned int)arg2;
- (id)accessibilityLabelsForSecureHeaders:(id)arg1 secureContents:(id)arg2 truncationSentinel:(id)arg3;
- (struct __CFArray *)imagesFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 outAccessibilityLabels:(id *)arg3;
- (id)_truncationSentinel;
- (struct __CFArray *)imagesFromContexts:(struct __CFArray *)arg1;
- (struct __CFArray *)arrayOfContexts:(unsigned long long)arg1 withRenderTraits:(id)arg2;
- (id)localizedStringForKey:(id)arg1;
- (void)dealloc;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)init;

@end

