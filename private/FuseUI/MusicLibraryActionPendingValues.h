//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MusicLibraryActionPendingValues : NSObject
{
    _Bool _hasPendingKeepLocalValue;
    _Bool _hasPendingLibraryState;
    long long _pendingKeepLocalValue;
    unsigned long long _pendingLibraryState;
}

@property(nonatomic) unsigned long long pendingLibraryState; // @synthesize pendingLibraryState=_pendingLibraryState;
@property(nonatomic) _Bool hasPendingLibraryState; // @synthesize hasPendingLibraryState=_hasPendingLibraryState;
@property(nonatomic) long long pendingKeepLocalValue; // @synthesize pendingKeepLocalValue=_pendingKeepLocalValue;
@property(nonatomic) _Bool hasPendingKeepLocalValue; // @synthesize hasPendingKeepLocalValue=_hasPendingKeepLocalValue;

@end

