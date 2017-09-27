//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, NWPBEndpoint, NWPBInterface, NWPBParameters;

@interface NWPBPath : PBCodable <NSCopying>
{
    NSMutableArray *_agents;
    NSString *_clientUUID;
    NWPBInterface *_delegateInterface;
    NWPBInterface *_directInterface;
    NWPBEndpoint *_endpoint;
    NWPBParameters *_parameters;
    int _status;
    _Bool _direct;
    _Bool _ipv4;
    _Bool _ipv6;
    _Bool _local;
    struct {
        unsigned int status:1;
        unsigned int direct:1;
        unsigned int ipv4:1;
        unsigned int ipv6:1;
        unsigned int local:1;
    } _has;
}

+ (Class)agentsType;
@property(nonatomic) _Bool direct; // @synthesize direct=_direct;
@property(nonatomic) _Bool local; // @synthesize local=_local;
@property(nonatomic) _Bool ipv6; // @synthesize ipv6=_ipv6;
@property(nonatomic) _Bool ipv4; // @synthesize ipv4=_ipv4;
@property(retain, nonatomic) NSMutableArray *agents; // @synthesize agents=_agents;
@property(retain, nonatomic) NWPBInterface *delegateInterface; // @synthesize delegateInterface=_delegateInterface;
@property(retain, nonatomic) NWPBInterface *directInterface; // @synthesize directInterface=_directInterface;
@property(retain, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
@property(retain, nonatomic) NWPBParameters *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NWPBEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDirect;
@property(nonatomic) _Bool hasLocal;
@property(nonatomic) _Bool hasIpv6;
@property(nonatomic) _Bool hasIpv4;
- (id)agentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)agentsCount;
- (void)addAgents:(id)arg1;
- (void)clearAgents;
@property(readonly, nonatomic) _Bool hasDelegateInterface;
@property(readonly, nonatomic) _Bool hasDirectInterface;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasClientUUID;
@property(readonly, nonatomic) _Bool hasParameters;
@property(readonly, nonatomic) _Bool hasEndpoint;

@end

