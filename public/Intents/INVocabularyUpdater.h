//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/_INVocabularyConnection.h>

@interface INVocabularyUpdater : _INVocabularyConnection
{
}

+ (void)clearAllCustomVocabulary;
+ (id)_sharedAppInstance;
- (void)setCustomPhotoAlbumNames:(id)arg1;
- (void)setValidatedVocabulary:(id)arg1 forIntentSlot:(id)arg2 validationCompletion:(CDUnknownBlockType)arg3;

@end
