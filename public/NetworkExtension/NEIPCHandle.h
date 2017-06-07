//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NEIPC, NSUUID;

@interface NEIPCHandle : NSObject
{
    NEIPC *_primary_ipc;
    NEIPC *_secondary_ipc;
    NSUUID *_config_id;
    struct __CFArray *_configurations;
    struct ipc_queue *_send_queue;
}

+     // Error parsing type: B36@0:8I16^{__CFData=}20^{_VPNConfigurationPrivate={__CFRuntimeBase=QAQ}^{__CFString}C^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFArray}^?{?=q^v^?^?^?}^?{?=q^v^?^?^?}@^v{ipc_queue=^{IPCMessage}^^{IPCMessage}}@{?=^{_VPNConfigurationPrivate}}}28, name: sendMessageWithType:data:forConfiguration:
+     // Error parsing type: v24@0:8^{_VPNConfigurationPrivate={__CFRuntimeBase=QAQ}^{__CFString}C^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFArray}^?{?=q^v^?^?^?}^?{?=q^v^?^?^?}@^v{ipc_queue=^{IPCMessage}^^{IPCMessage}}@{?=^{_VPNConfigurationPrivate}}}16, name: deregisterConfiguration:
@property struct ipc_queue *send_queue; // @synthesize send_queue=_send_queue;
@property struct __CFArray *configurations; // @synthesize configurations=_configurations;
@property(retain) NSUUID *config_id; // @synthesize config_id=_config_id;
@property(retain) NEIPC *secondary_ipc; // @synthesize secondary_ipc=_secondary_ipc;
@property(retain) NEIPC *primary_ipc; // @synthesize primary_ipc=_primary_ipc;
- (id)createIPCFromEndpoint:(id)arg1;
- (_Bool)sendMessage:(struct __CFData *)arg1 withType:(unsigned int)arg2;
-     // Error parsing type: v24@0:8^{_VPNConfigurationPrivate={__CFRuntimeBase=QAQ}^{__CFString}C^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFArray}^?{?=q^v^?^?^?}^?{?=q^v^?^?^?}@^v{ipc_queue=^{IPCMessage}^^{IPCMessage}}@{?=^{_VPNConfigurationPrivate}}}16, name: addConfiguration:
-     // Error parsing type: v24@0:8^{_VPNConfigurationPrivate={__CFRuntimeBase=QAQ}^{__CFString}C^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFArray}^?{?=q^v^?^?^?}^?{?=q^v^?^?^?}@^v{ipc_queue=^{IPCMessage}^^{IPCMessage}}@{?=^{_VPNConfigurationPrivate}}}16, name: removeConfiguration:
-     // Error parsing type: q24@0:8^{_VPNConfigurationPrivate={__CFRuntimeBase=QAQ}^{__CFString}C^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFArray}^?{?=q^v^?^?^?}^?{?=q^v^?^?^?}@^v{ipc_queue=^{IPCMessage}^^{IPCMessage}}@{?=^{_VPNConfigurationPrivate}}}16, name: getIndexOfConfiguration:
- (void)dealloc;
-     // Error parsing type: @24@0:8^{_VPNConfigurationPrivate={__CFRuntimeBase=QAQ}^{__CFString}C^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFRunLoopSource}^{__CFArray}^?{?=q^v^?^?^?}^?{?=q^v^?^?^?}@^v{ipc_queue=^{IPCMessage}^^{IPCMessage}}@{?=^{_VPNConfigurationPrivate}}}16, name: initWithConfiguration:

@end
