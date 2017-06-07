//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPShuffleController;

@protocol MPShuffleControllerDataSource <NSObject>
- (unsigned long long)shuffleController:(MPShuffleController *)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3;
- (id)shuffleController:(MPShuffleController *)arg1 identifierForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)itemCountForShuffleController:(MPShuffleController *)arg1;
@end

