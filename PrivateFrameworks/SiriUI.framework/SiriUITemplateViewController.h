/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUITemplateViewController : UIViewController {
    BOOL  _active;
    BOOL  _compressed;
    <SiriUITemplateViewControllerDelegate> * _delegate;
    <SiriUITemplateModel> * _templateModel;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (getter=isCompressed, nonatomic) BOOL compressed;
@property (nonatomic) <SiriUITemplateViewControllerDelegate> *delegate;
@property (nonatomic, retain) <SiriUITemplateModel> *templateModel;
@property (nonatomic, readonly) <SiriUITemplateModelPrivate> *templateModelPrivate;
@property (nonatomic, retain) UIView<SiriUITemplateView> *view;

+ (id)templateViewControllerForTemplateModel:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithTemplateModel:(id)arg1;
- (id)delegate;
- (BOOL)isActive;
- (BOOL)isCompressed;
- (void)loadView;
- (void)prepareForDismissal;
- (void)setActive:(BOOL)arg1;
- (void)setCompressed:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTemplateModel:(id)arg1;
- (id)templateModel;
- (id)templateModelPrivate;

@end