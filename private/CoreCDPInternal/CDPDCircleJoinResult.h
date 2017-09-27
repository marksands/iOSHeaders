//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CDPDCircleJoinResult : NSObject
{
    _Bool _didJoin;
    _Bool _needsBackupRecovery;
    _Bool _hasPeersForRemoteApproval;
    _Bool _hasPeersWithBackupRecords;
    _Bool _requiresEscrowRecordsFetch;
    _Bool _requiresInitialSync;
    int _circleStatus;
    unsigned long long _remotePeeriCKState;
}

@property int circleStatus; // @synthesize circleStatus=_circleStatus;
@property unsigned long long remotePeeriCKState; // @synthesize remotePeeriCKState=_remotePeeriCKState;
@property _Bool requiresInitialSync; // @synthesize requiresInitialSync=_requiresInitialSync;
@property _Bool requiresEscrowRecordsFetch; // @synthesize requiresEscrowRecordsFetch=_requiresEscrowRecordsFetch;
@property _Bool hasPeersWithBackupRecords; // @synthesize hasPeersWithBackupRecords=_hasPeersWithBackupRecords;
@property _Bool hasPeersForRemoteApproval; // @synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval;
@property _Bool needsBackupRecovery; // @synthesize needsBackupRecovery=_needsBackupRecovery;
@property _Bool didJoin; // @synthesize didJoin=_didJoin;

@end

