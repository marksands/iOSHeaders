//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "NWPrettyDescription.h"

@class NSArray, NSData, NSDictionary, NSObject<OS_nw_parameters>, NSSet, NSString, NSURL, NSUUID, NWAddressEndpoint, NWInterface;

@interface NWParameters : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>
{
    _Bool _enableSFO;
    NSObject<OS_nw_parameters> *_internalParameters;
}

+ (id)parametersWithProtocolBufferData:(id)arg1;
+ (id)parametersWithCParameters:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool enableSFO; // @synthesize enableSFO=_enableSFO;
@property(retain) NSObject<OS_nw_parameters> *internalParameters; // @synthesize internalParameters=_internalParameters;
- (void).cxx_destruct;
- (id)createProtocolBufferObject;
@property(nonatomic) NSData *metadata;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)internetProtocols;
- (id)transportProtocols;
- (id)applicationProtocols;
- (id)protocolsAtLevel:(int)arg1;
- (void)setProtocolAtLevel:(unsigned long long)arg1 protocol:(struct nw_protocol_identifier *)arg2;
- (id)copyRequiredAgentsDescription;
@property(readonly, nonatomic, getter=isDryRun) _Bool dryRun;
- (_Bool)hasNonEmptyProxyConfiguration;
- (_Bool)hasProhibitedNetworkAgents;
- (_Bool)hasPreferredNetworkAgents;
- (_Bool)hasRequiredNetworkAgents;
@property(nonatomic, getter=isDiscretionary) _Bool discretionary;
@property(nonatomic) _Bool prohibitFallback;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(copy, nonatomic) NSArray *protocolTransforms;
- (void)setInitialDataPayload:(id)arg1;
- (void)setSourceApplicationWithBundleID:(id)arg1;
- (void)setSourceApplicationWithToken:(CDStruct_6ad76789)arg1;
@property(nonatomic) unsigned long long maximumSSLProtocolVersion;
@property(nonatomic) unsigned long long minimumSSLProtocolVersion;
- (int)sslProtocolWithTLSVersion:(unsigned short)arg1;
- (unsigned short)tlsVersionWithSSLProtocol:(int)arg1;
@property(nonatomic) _Bool keepAliveOffload;
@property(nonatomic) unsigned long long keepAliveInterval;
@property(nonatomic) unsigned long long keepAliveIdleTime;
@property(nonatomic) _Bool keepAlive;
@property(copy, nonatomic) NSSet *SSLCipherSuites;
@property(copy, nonatomic) NSData *TLSSessionID;
@property(nonatomic) _Bool disableBlackHoleDetection;
@property(nonatomic) _Bool enforceExtendedValidation;
@property(nonatomic) _Bool enableTLSSessionTicket;
@property(nonatomic) _Bool enableTLS;
@property(nonatomic) _Bool noProxy;
@property(nonatomic) _Bool indefinite;
@property(nonatomic) int multipathService;
@property(nonatomic) _Bool multipath;
@property(nonatomic) _Bool resolvePTR;
@property(nonatomic) _Bool useP2P;
@property(nonatomic) _Bool useAWDL;
@property(nonatomic) _Bool useLongOutstandingQueries;
@property(nonatomic) _Bool disableNagleAlgorithm;
@property(nonatomic) _Bool reduceBuffering;
@property(nonatomic) _Bool enableExtendedBackgroundIdle;
@property(nonatomic) _Bool useTFOHeuristics;
@property(nonatomic) _Bool enableTFONoCookie;
@property(nonatomic) _Bool enableTFO;
- (void)preferNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)preferNetworkAgentWithUUID:(id)arg1;
- (void)requireNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)requireNetworkAgentWithUUID:(id)arg1;
@property(nonatomic) long long requiredInterfaceSubtype;
@property(nonatomic) long long requiredInterfaceType;
@property(retain, nonatomic) NWInterface *requiredInterface;
- (void)prohibitNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (void)prohibitNetworkAgentWithUUID:(id)arg1;
- (void)prohibitInterface:(id)arg1;
- (void)prohibitInterfaceSubtype:(long long)arg1;
- (void)prohibitInterfaceType:(long long)arg1;
@property(readonly, nonatomic) _Bool prohibitCellular;
@property(nonatomic) _Bool prohibitRoaming;
@property(nonatomic) _Bool prohibitExpensivePaths;
@property(copy, nonatomic) NSDictionary *proxyConfiguration;
@property(readonly, nonatomic) NSURL *sanitizedURL;
@property(copy, nonatomic) NSURL *url;
@property(nonatomic) _Bool reuseLocalAddress;
@property(retain, nonatomic) NWAddressEndpoint *localAddress;
@property(nonatomic) unsigned char requiredAddressFamily;
@property(retain, nonatomic) NSUUID *parentID;
- (_Bool)copyEffectiveAuditToken:(CDStruct_6ad76789 *)arg1;
@property(copy, nonatomic) NSString *effectiveBundleID;
@property(copy, nonatomic) NSUUID *effectiveProcessUUID;
- (_Bool)hasDelegatedProcessUUID;
@property(copy, nonatomic) NSUUID *processUUID;
@property(nonatomic) unsigned int uid;
- (_Bool)hasDelegatedPIDForOriginatingPID:(int)arg1;
@property(nonatomic) int pid;
@property(nonatomic) unsigned char ipProtocol;
@property(nonatomic) unsigned long long trafficClass;
@property(nonatomic) unsigned long long dataMode;
@property(copy, nonatomic) NSString *account;
@property(nonatomic) _Bool allowSocketAccess;
@property(nonatomic) _Bool useBoringSSL;
@property(nonatomic) _Bool trustInvalidCertificates;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)copyCParameters;
- (id)initWithParameters:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

