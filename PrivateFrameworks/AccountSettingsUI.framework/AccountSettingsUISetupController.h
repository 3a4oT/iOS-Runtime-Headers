/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */



@interface AccountSettingsUISetupController : PSSetupController 
{
    unsigned int _didAlreadyPopController : 1;
    unsigned int _didAttemptFirstSyncSetup : 1;
    unsigned int _forceMailSetup : 1;
}


- (id)syncControllerSpecifierNamed:(id)arg1 account:(id)arg2;
- (void)_reallyFinishedAccountSetup;
- (void)didFinishTransition;
- (void)forceMailSetup;
- (void)finishedAccountSetup;
- (void)controller:(id)arg1 finishedSetupWithAccount:(id)arg2;

@end