//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUIDisambiguationGroup.h>

#import <AssistantServices/AFDisambiguationAssistancePrivate-Protocol.h>

@class AFDisambiguationInfo, NSData;

@interface SAUIDisambiguationGroup (AFDisambiguationAssistancePrivate) <AFDisambiguationAssistancePrivate>
- (void)af_saveItemSelection:(id)arg1 forType:(long long)arg2;
- (id)af_assistedSelectionItem;
@property(retain, nonatomic, setter=af_setDisambiguationInfo:) AFDisambiguationInfo *af_disambiguationInfo;
- (id)af_itemForIndexIdentifier:(id)arg1;
- (id)af_indexIdentifierForItem:(id)arg1;
@property(readonly, nonatomic) NSData *af_disambiguationIdentifier;
@end

