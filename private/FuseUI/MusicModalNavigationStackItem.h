//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MusicJSManagedObject, SKUINavigationDocumentController, UINavigationController;

@interface MusicModalNavigationStackItem : NSObject
{
    UINavigationController *_navigationController;
    MusicJSManagedObject *_jsNavigationDocumentManagedObject;
    long long _lastNavigationControllerOperation;
    SKUINavigationDocumentController *_navigationDocumentController;
}

@property(retain, nonatomic) SKUINavigationDocumentController *navigationDocumentController; // @synthesize navigationDocumentController=_navigationDocumentController;
@property(nonatomic) long long lastNavigationControllerOperation; // @synthesize lastNavigationControllerOperation=_lastNavigationControllerOperation;
@property(retain, nonatomic, setter=setJSNavigationDocumentManagedObject:) MusicJSManagedObject *jsNavigationDocumentManagedObject; // @synthesize jsNavigationDocumentManagedObject=_jsNavigationDocumentManagedObject;
- (void).cxx_destruct;
@property(readonly, nonatomic) UINavigationController *navigationController;
- (id)initWithNavigationController:(id)arg1;
- (id)init;

@end

