# BW Risk Assessment — Risk Management Report
**Date: 2026-10-02 (Friday), ~10:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Third BW report overall, first since yesterday's F-grade close (10/1 ~14:41 ET).

---

## Overall Portfolio Risk Grade: **D** — upgraded from F

## Single biggest risk right now
**NVDA is now a priced-for-perfection position with zero hedge, sitting at its best-ever unrealized gain (+17.75%) at the exact moment MS's DCF gap hit its widest-ever reading (-18.6% overvalued).** The stock is up another +2.72% today, its ninth-plus consecutive trading day over BR's 10% pool target (now +1.66pp over), while fair value hasn't moved at all — pure multiple expansion, not a re-rating. BR already declined to raise the target and instituted a no-new-cash instruction rather than trim, which this desk isn't second-guessing. But radical transparency requires naming what that policy actually means in practice: this book has no stop-loss and no options hedge, so a reversal in NVDA has no circuit breaker whatsoever, and the position keeps getting larger in dollar terms purely from price action while the valuation case against holding more of it keeps getting worse. That is the real risk today — not a new one, but one that has now compounded for over a week without any mechanism in this book capable of capping it besides "wait and see."

**The upgrade from F is real, not noise.** Two genuine structural improvements happened since yesterday's F close: (1) GEHC's DCF gap narrowed from -2.3% overvalued to essentially flat (-0.4%, MS's 10/2 price-roll) — the valuation floor this position was entered on is not fully restored, but it's no longer a negative read; and (2) BR finally posted its overdue re-underwrite (10/1 ~16:13 ET), closing out all three items this desk had flagged as open (NVDA target, XLE top-up lapse, GEHC/XLE hold decisions) — the governance gap that was itself part of yesterday's F grade is now closed. Pool profit also sits at its best level of the entire experiment (+0.964%, vs. yesterday's +0.023%). None of that erases NVDA's record overvaluation or XLE's still-broken hedge (below), which is why this is a D, not a C.

---

## Portfolio snapshot (live, 2026-10-02 ~10:42 ET)

`get_portfolio`: total_value **$100.482231895** (cash $56.10 + equity $44.382231895). Pool ≈ **$50.4822**, a **+$0.4822 (+0.964%) accumulated profit** — the best reading on file for this experiment, improving further from yesterday's close (+0.023%) and this morning's run (+0.90%). Deployable cash $6.10 (~12.08% of pool).

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L | Day Δ (vs 10/1 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $237.146 | $5.89 | 13.26% | 11.66% | **+17.75%** (cost $201.40) | **+2.72%** |
| VTI | 0.036690 | $379.335 | $13.92 | 31.37% | 27.58% | +2.41% (cost $370.40) | +1.11% |
| VXUS | 0.154525 | $85.535 | $13.22 | 29.78% | 26.18% | +1.67% (cost $84.13) | +1.27% |
| OMCL | 0.106405 | $33.835 | $3.60 | 8.11% | 7.13% | **-27.99%** (cost $46.99) | +1.18% |
| XLE | 0.086775 | $62.250 | $5.40 | 12.17% | 10.70% | +8.03% (cost $57.62) | **-0.72%** (only red position) |
| GEHC | 0.036393 | $64.780 | $2.36 | 5.31% | 4.67% | -5.69% (cost $68.69) | +1.25% |
| Cash (deployable) | — | — | $6.10 | — | 12.08% | — | — |

NVDA+OMCL combined concentration: **21.38% of equity** (25% trigger, ~3.62pp buffer — clean). NVDA alone: 11.66% of pool vs. BR's 10% target (+1.66pp over, 9th+ consecutive trading day over target, no 5pp drift trigger). No mechanical trigger fired.

---

## 1. Correlation analysis between holdings

| Pair | Correlation (qualitative) | Driver |
|---|---|---|
| NVDA ↔ VTI | High (+) | VTI's own mega-cap tech weight (~30%+) double-counts NVDA exposure rather than diversifying it |
| NVDA ↔ VXUS | Moderate (+) | Ex-US indices carry far less AI/semis weight; genuine but partial diversification |
| NVDA ↔ OMCL | Moderate (+) | Both equity-beta growth names; today both rallied together on the broad risk-on tape |
| NVDA ↔ XLE | Historically Low/negative, **still decoupled** | Energy vs. growth normally diversify; today is the clearest live example yet — every other holding rallied and XLE was the sole red line, the opposite of what a working hedge should do on a risk-on day |
| NVDA ↔ GEHC | Low-to-moderate | Different sector, but both are now linked through the same discount-rate channel (MS's WACC rebuild repriced both) rather than fundamentals |
| VTI ↔ VXUS | Moderate (+) | Both broad equity baskets; today's broad relief rally moved them almost in lockstep (+1.11%/+1.27%) |
| XLE ↔ GEHC | Low | No structural link; both happen to share exposure to MS's same WACC input, a modeling artifact, not a fundamental correlation |

**Takeaway:** today's tape is the cleanest live test yet of this book's diversification claims — and the one pair genuinely expected to offset each other (NVDA/XLE) failed the test again, in the opposite direction from usual (XLE red on a green day, not just failing to rally on an oil shock).

## 2. Sector concentration risk (% breakdown)

Look-through basis (NVDA direct + VTI/VXUS's own sector weights blended in):

| Sector | Approx. % of equity (look-through) | Note |
|---|---|---|
| Technology / Semis / AI | **~28-30%** | NVDA direct (13.26%) + VTI's own ~30% tech weight + a smaller VXUS tech slice — ticking up again as NVDA's price rallies further over target |
| Healthcare | ~17-19% | GEHC (5.31%) + OMCL (8.11%) + VTI/VXUS's own healthcare weight (~11-13% combined) |
| Energy | ~13-14% | XLE direct (12.17%) + VTI/VXUS's small native energy weight |
| Broad/diversified (unattributed by single sector) | ~38-40% | The remainder of VTI/VXUS spread across financials, industrials, consumer, etc. |

Tech/AI concentration remains the single largest look-through sector bet in the book and is drifting up, not down, purely on NVDA's continued price strength.

## 3. Geographic exposure and currency risk

- **US exposure**: NVDA (100% US), VTI (100% US), OMCL (US), XLE (US-domiciled energy majors), GEHC (US-domiciled, globally-selling) → roughly **~85-88% of equity is US-domiciled/listed**.
- **Ex-US exposure**: VXUS alone, ~29.8% of equity — the book's only dedicated non-US sleeve.
- **Currency risk**: all positions are USD-denominated at the ticker level; VXUS's underlying holdings carry real FX translation risk (EUR, JPY, GBP, EM currencies) embedded but invisible in quote-level data. GEHC's global revenue base carries the same indirect exposure. No direct FX hedge exists anywhere in this book.
- A live, ongoing **US government shutdown** (now in its third day, no resolution timeline confirmed by independent search this run — see data note) is exactly the kind of US-centric shock that hits ~85%+ of this book's equity simultaneously, while VXUS's ~30% ex-US sleeve is the only structural offset.

## 4. Interest rate sensitivity by position

| Position | Rate sensitivity | Basis |
|---|---|---|
| NVDA | **High** | Long-duration growth name; MS's DCF gap widened again today to -18.6% (from -16.7% on 10/1), the worst reading on file |
| OMCL | **High** | Small/mid-cap growth; DCF upside narrowed slightly to +46.1% (from +43.5%) on continued WACC pressure, but remains the widest discount on the book |
| GEHC | **High, but thesis-neutral today** | DCF gap narrowed from -2.3% overvalued to essentially flat (-0.4%) purely on a small price pullback, not a rate reversal — MS itself calls this "noise, not signal" on a single-stage model; a genuine rate reversal (10yr back under 5%) would restore it to meaningfully undervalued |
| XLE | **Moderate, model-sensitive** | DCF gap widened slightly to -5.5% (from -4.2%) on a small price pop, but XLE's live price action remains decoupled from both rates and its own oil thesis (see §1) — the model sensitivity is real, the live-price sensitivity is unreliable |
| VTI | **Moderate** | Broad index, but its own ~30% tech weight imports real duration risk |
| VXUS | **Lower** | More value/financials-tilted, less duration-sensitive than the US core sleeve |

**NVDA remains the one position where this week's rate move and today's price action are both making the risk worse simultaneously** — every other rate-sensitive name (GEHC, XLE, OMCL) is at least holding steady or improving on valuation terms even as the rate backdrop stays elevated.

## 5. Recession stress test (estimated drawdown)

Applying BR's own modeled bad-year pool-level scenario (-26% to -38%, widened in BR's 10/1 report) with position-level color:

| Position | Stress-case drawdown (illustrative) | Rationale |
|---|---|---|
| NVDA | -40% to -55% | High-beta growth/semis; worst historical drawdowns in a demand-shock recession exceed broad market by 1.5-2x; today's record overvaluation gap widens the downside case further |
| OMCL | -25% to -35% | Small-cap, already -28% from cost; further multiple compression possible, partially offset by healthcare's defensive demand and the widest DCF discount on the book |
| GEHC | -15% to -25% | Healthcare equipment has real defensive characteristics (recurring service revenue); valuation floor is thin (near-parity) rather than negative, a modest improvement vs. yesterday |
| XLE | -20% to -35%, wide range | Energy is genuinely cyclical in a demand-destruction recession, but a supply-shock-driven recession (e.g. a Hormuz closure) could see XLE *rise* even as the rest of the book falls — path-dependent, and today's decoupling argues against counting on either outcome reliably |
| VTI | -25% to -35% | Broad US market, in line with historical recession drawdowns |
| VXUS | -20% to -30% | Typically shallower than US in a US-centric recession, deeper in a globally synchronized one |

**Pool-level estimate: -26% to -38%** (unchanged from BR's own 10/1 widened range) — at this book's current ~$50.5 pool size, roughly a **$13-19 drawdown**, survivable but worth restating plainly given today's improved mood on the tape doesn't change the underlying stress-case math at all.

## 6. Liquidity risk rating

| Position | Liquidity rating | Note |
|---|---|---|
| NVDA | 🟢 Very low risk | Mega-cap, extremely deep market |
| VTI | 🟢 Very low risk | Largest US total-market ETF, continuous deep liquidity |
| VXUS | 🟢 Very low risk | Large international ETF, deep liquidity |
| XLE | 🟢 Very low risk | Large sector ETF, deep liquidity |
| OMCL | 🟡 Low-moderate | Small/mid-cap single name; thinner book than the ETFs, but still NASDAQ-listed with routine daily volume — immaterial at this book's fractional-share size |
| GEHC | 🟡 Low-moderate | Mid-cap single name; same profile as OMCL |

No liquidity concern at this book's position sizes ($2-14 per line) — flagged for completeness, not as an active risk.

## 7. Single stock risk & position sizing recommendations

- **NVDA (11.66% of pool, +1.66pp over BR's 10% target, record-wide -18.6% DCF gap):** this is the book's single largest live risk by every measure this desk tracks — sizing drift, valuation gap, and look-through sector concentration all point the same direction, and all three got worse again today. This desk is not proposing a unilateral trim (rule 19 — no basis to force one), but is naming plainly that "hold and let new cash rebalance it" is a policy that only works if new cash actually materializes faster than NVDA keeps outrunning its own fair value. Recommend BR's next re-underwrite explicitly address what happens if the overshoot is still growing, not shrinking, by the next scheduled cycle.
- **OMCL (7.13% of pool, -2.87pp under target, -27.99% unrealized):** sizing is fine — it's under target by design pending the DCA gate. The discount has narrowed two reports running (56.9% → 43.5% → 46.1%, essentially flat-to-slightly-wider today) — worth a continued watch on whether that reflects price recovery or fair-value erosion, but no fresh concern this run.
- **GEHC and XLE (4.67% and 10.70% of pool, near target):** sizing is appropriate; GEHC's valuation floor improved to near-neutral today (a genuine, if thin, positive development); XLE's live issue remains that it isn't behaving like the hedge this book is relying on it to be, not its sizing.
- **VTI/VXUS:** both within ~1.2pp of target; no action.

## 8. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 2-4 weeks) | Estimated pool impact |
|---|---|---|
| AI-valuation unwind (NVDA-specific guidance cut, hyperscaler capex pullback, or a broad multiple-compression event) | ~15-20%, modestly higher than before given today's record DCF gap and continued price drift | -15% to -25% on NVDA alone, -5% to -9% pool-level |
| Shutdown extends 2+ weeks, broad risk-off deepens | ~35-45% (shutdown confirmed ongoing but exact duration/resolution timeline not independently confirmable this run — see data note) | -5% to -10% |
| 10yr yield pushes through 5.5%, a second WACC rebuild hits NVDA/OMCL further | ~20-25% | -3% to -8%, concentrated in NVDA/OMCL |
| Hormuz escalation to an actual, sustained closure (not just ongoing skirmishing) | ~10-15% | XLE theoretically +15-25%, but **given today's live decoupling on a green day, treat this as a coin-flip on direction, not a reliable hedge payoff** |
| Broad recession confirmation (NBER-style, not just a growth scare) | ~10-15% over 2-4 weeks | -26% to -38% pool-level (see §5) |
| Clean rate reversal (10yr back under 5%), GEHC/XLE DCF gaps improve further | ~20-25% | +2% to +4%, concentrated in GEHC/XLE; would also narrow NVDA's gap somewhat but not resolve it given the size of the current overvaluation |

## 9. Hedging strategies for the top 3 risks (equities-only — no options)

1. **NVDA concentration + record valuation gap:** the only real equities-only lever is directing all fresh deployable cash away from NVDA (already BR's standing instruction) and toward the OMCL DCA gate or a future GEHC/XLE top-up instead. Reiterating, not proposing to act on unilaterally — this is BR's call under rule 19.
2. **Rate-shock sensitivity (NVDA, OMCL, and to a lesser degree GEHC/XLE):** no fixed-income sleeve exists in this all-equity mandate, so sizing discipline remains the only lever — don't add to any rate-sensitive name on "it's cheaper" grounds alone while the WACC rebuild is this fresh, consistent with rule 18's addendum.
3. **Hedge-decoupling risk (XLE still not tracking its own thesis, today in the opposite direction from usual):** since this book cannot short or buy puts, the only available response is **not relying on XLE for portfolio protection when sizing NVDA/tech risk** — today's price action is the clearest evidence yet that this "hedge" cannot be counted on in either direction. This is a discipline/logging fix, not a trade.

## 10. Rebalancing suggestions (allocation %, pool basis)

| Position | Current | BR target (set 9/17) | Drift |
|---|---|---|---|
| VTI | 27.58% | 28% | -0.42pp |
| VXUS | 26.18% | 25% | +1.18pp |
| NVDA | 11.66% | 10% | +1.66pp |
| XLE | 10.70% | 12% | -1.30pp |
| GEHC | 4.67% | 4% | +0.67pp |
| OMCL | 7.13% | 10% | -2.87pp (DCA-gated by design) |
| Cash | 12.08% | 11% | +1.08pp |

No position breaches the 5pp single-position drift trigger — **no rebalance is mechanically required today.** NVDA's +1.66pp overage is now the widest sustained drift on the book outside OMCL's by-design gap, and it is compounding rather than stabilizing (+0.14pp wider than yesterday's +1.52pp, all from price action). This isn't a new flag, but it is the one number this desk would ask BR to watch closest into the next scheduled cycle — a drift that keeps widening purely on price, in a name that just hit its worst-ever valuation reading, is the scenario the 10% target was presumably set to prevent.

---

## Heat Map Summary

| Risk Factor | Level | Trend since 10/1 14:41 ET |
|---|---|---|
| NVDA valuation gap + sizing drift (record -18.6%, +1.66pp over target) | 🔴 High | ⬆ worse — both metrics widened further today |
| XLE hedge-decoupling (red on a green day — clearest live failure yet) | 🟡 Moderate | → unchanged in kind, sharper example today |
| Government shutdown (confirmed ongoing, duration unresolved) | 🔴 High | → unchanged |
| Rate shock / WACC level (10yr ~5.2-5.3%, unconfirmed exact print) | 🔴 High | → unchanged |
| Hormuz/Iran tail risk | 🔴 High | → unchanged, still open |
| GEHC valuation support | 🟡 Moderate | ⬆ improved — gap narrowed from -2.3% to -0.4% |
| BR governance cadence | 🟢 Low | ⬆ improved — 10/1 re-underwrite posted, all open items resolved |
| Look-through tech/AI concentration (~28-30% of equity) | 🟡 Moderate | ⬆ ticking up with NVDA's price |
| OMCL drawdown (-28.0%) vs. widest DCF discount on book | 🟡 Moderate | → stable |
| Pool profit level (+0.964%) | 🟢 Low | ⬆ best reading on file, but price-driven, not a risk-reducing event by itself |
| Headline concentration triggers (NVDA%, NVDA+OMCL% combined) | 🟢 Low | → clean, 3.62pp buffer to the 25% trigger |
| Liquidity | 🟢 Low | → unchanged |

**Note on data quality (rule 4 discipline):** fresh WebSearch this run on the 10yr yield, shutdown status, and Hormuz again hit the same wall every desk has flagged for days — the only 10yr figure found was a stale "$4.79% as of 9/2" read, directly contradicted by MS's own corroborated ~5.2-5.3% chain, so it is **not** used here; the shutdown is independently confirmed as ongoing (began 10/1, no resolution timeline) but no October 2-dated figures on cost/duration were found; Hormuz search returned only September-dated incident reports, nothing confirming today's status either way. This report leans on Robinhood-verified live prices and MS's own already-corroborated rate chain rather than an unverified or stale web figure, consistent with every other desk's current practice.

---

Sources:
- [Did the government shut down last night? Here's what to know — AOL](https://www.aol.com/articles/did-government-shut-down-last-101251200.html)
- [10 Year Treasury Rate — YCharts](https://ycharts.com/indicators/10_year_treasury_rate)
- [Two tankers explode near Strait of Hormuz, Iranian Guards say — IntelliNews](https://www.intellinews.com/two-tankers-explode-near-strait-of-hormuz-iranian-guards-say-455544/)
- Internal: trading-experiment/state.md (live Robinhood snapshot and Balance history through 10/2 ~10:36 ET), analysts/ms-dcf-valuation.md (10/2 ~09:5x ET price-roll), analysts/br-portfolio-builder.md (10/1 ~16:13 ET re-underwrite), analysts/gs-stock-screener.md (10/2 ~09:43 ET), analysts/jpm-earnings-analyzer.md (10/2 ~09:21 ET), this desk's own 10/1 ~14:41 ET report (prior version, git history)
