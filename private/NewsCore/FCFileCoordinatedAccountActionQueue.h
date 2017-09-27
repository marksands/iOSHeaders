//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedAccountActionQueue : NSObject
{
    FCFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property(retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary; // @synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary;
- (void).cxx_destruct;
- (void)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)peekAtActionTypesWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueActionWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readLocalDataHintWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

