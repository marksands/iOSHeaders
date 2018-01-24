//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import "NSSecureCoding.h"

@class NSString;

@interface ASFolder : ASItem <NSSecureCoding>
{
    _Bool _renameOnCollision;
    int _folderType;
    int _localID;
    NSString *_serverID;
    NSString *_parentID;
    NSString *_displayName;
    unsigned long long _changeType;
    long long _dataclass;
}

+ (id)asParseRules;
+ (_Bool)supportsSecureCoding;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(nonatomic) _Bool renameOnCollision; // @synthesize renameOnCollision=_renameOnCollision;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(nonatomic) int localID; // @synthesize localID=_localID;
@property(nonatomic) int folderType; // @synthesize folderType=_folderType;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *parentID; // @synthesize parentID=_parentID;
@property(copy, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;
- (void).cxx_destruct;
- (void)setFolderTypeNumber:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)initWithFolderType:(int)arg1 serverID:(id)arg2 parentID:(id)arg3 displayName:(id)arg4 localID:(int)arg5;
- (id)description;
- (id)_folderTypeString;
- (_Bool)mayContainDataclasses:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;

@end

